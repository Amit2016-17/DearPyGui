#pragma once

#include <utility>

#include "Core/AppItems/mvTypeBases.h"

//-----------------------------------------------------------------------------
// Widget Index
//
//     * mvDragFloat
//     * mvDragFloat2
//     * mvDragFloat3
//     * mvDragFloat4
//     * mvDragInt
//     * mvDragInt2
//     * mvDragInt3
//     * mvDragInt4
//
//-----------------------------------------------------------------------------

namespace Marvel {

	//-----------------------------------------------------------------------------
	// mvDragFloat
	//-----------------------------------------------------------------------------
	class mvDragFloat : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragFloat)

		mvDragFloat(const std::string& parent, const std::string& name, float default_value = 0.0f, float speed = 1.0f,
              float minv = 0.0f, float maxv = 1.0f, std::string format = "%.3f")
			: mvFloatItemBase(parent, name, 1, default_value), m_speed(speed), m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

		void draw() override
		{

			if (ImGui::DragFloat(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}

		}

	private:

		float       m_speed;
		float       m_min;
		float       m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvDragFloat2
	//-----------------------------------------------------------------------------
	class mvDragFloat2 : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragFloat2)

		mvDragFloat2(const std::string& parent, const std::string& name, float default_value[2], float speed = 1.0f, float minv = 0.0f,
				float maxv = 1.0f, std::string  format = "%.3f")
			: mvFloatItemBase(parent, name, 2, default_value[0], default_value[1]), m_speed(speed),
			m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

        void draw() override
		{
			if (ImGui::DragFloat2(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		float       m_min;
		float       m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvDragFloat3
	//-----------------------------------------------------------------------------
	class mvDragFloat3 : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragFloat3)

		mvDragFloat3(const std::string& parent, const std::string& name, float default_value[3], float speed = 1.0f, float minv = 0.0f,
				float maxv = 1.0f, std::string  format = "%.3f")
			: mvFloatItemBase(parent, name, 3, default_value[0], default_value[1], default_value[2]), m_speed(speed),
			m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

        void draw() override
		{
			if (ImGui::DragFloat3(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		float       m_min;
		float       m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvDragFloat4
	//-----------------------------------------------------------------------------
	class mvDragFloat4 : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragFloat4)

		mvDragFloat4(const std::string& parent, const std::string& name, float default_value[4], float speed = 1.0f, float minv = 0.0f,
				float maxv = 1.0f, std::string format = "%.3f")
			: mvFloatItemBase(parent, name, 4, default_value[0], default_value[1], default_value[2], default_value[3]), m_speed(speed),
			m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

        void draw() override
		{
			if (ImGui::DragFloat4(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		float       m_min;
		float       m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvDragInt
	//-----------------------------------------------------------------------------
	class mvDragInt : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragInt)

		mvDragInt(const std::string& parent, const std::string& name, int default_value = 0, float speed = 1.0f, int minv = 0,
				int maxv = 100, std::string  format = "%d")
			: mvIntItemBase(parent, name, 1, default_value), m_speed(speed), m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

		void draw() override
		{

			if (ImGui::DragInt(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		int         m_min;
		int         m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvSliderInt2
	//-----------------------------------------------------------------------------
	class mvDragInt2 : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragInt2)

		mvDragInt2(const std::string& parent, const std::string& name, int default_value[2], float speed = 1.0f, int minv = 0,
				int maxv = 100, std::string  format = "%d")
			: mvIntItemBase(parent, name, 2, default_value[0], default_value[1]), m_speed(speed),
			m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

        void draw() override
		{
			if (ImGui::DragInt2(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		int         m_min;
		int         m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvSliderInt3
	//-----------------------------------------------------------------------------
	class mvDragInt3 : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragInt3)

		mvDragInt3(const std::string& parent, const std::string& name, int default_value[3], float speed = 1.0f, int minv = 0,
				int maxv = 100, std::string  format = "%d")
			: mvIntItemBase(parent, name, 3, default_value[0], default_value[1], default_value[2]), m_speed(speed),
			m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

        void draw() override
		{
			if (ImGui::DragInt3(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		int         m_min;
		int         m_max;
		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvSliderInt4
	//-----------------------------------------------------------------------------
	class mvDragInt4 : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::DragInt4)

		mvDragInt4(const std::string& parent, const std::string& name, int default_value[4], float speed = 1.0f, int minv = 0,
				int maxv = 100, std::string  format = "%d")
			: mvIntItemBase(parent, name, 4, default_value[0], default_value[1], default_value[2], default_value[3]), m_speed(speed),
			m_min(minv), m_max(maxv), m_format(std::move(format))
		{
		}

        void draw() override
		{
			if (ImGui::DragInt4(m_label.c_str(), m_value.data(), m_speed, m_min, m_max, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		float       m_speed;
		int         m_min;
		int         m_max;
		std::string m_format;

	};

}