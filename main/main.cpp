#pragma once
#include <iostream>
#include <string>
// #include <gtest/gtest.h>
// #include <gmock/gmock.h>


class Sample
{
public:
	Sample() { label = "Empty"; }
	Sample(std::string setLabel) : label{setLabel} {}
	
	Sample& operator=(Sample& other)
	{
		label = other.label;
		return *this;
	}

	std::string getLabel() { return label; }
	void displayDoge() { 
		std::cout << R"(
                   �              �
                  ݱ�           �߱�
                  ݱ��        �߱���
                 ��߱��������߱�����
               ��߱����������۱��۱�
             �߱�����������������߱�
            ޱ���ܱ��������������ܱ��
            ݰ���߱�������ܱ������۱�
           ް�������������߱����������
           ݰ����ܱ�������������������
          ݱ�������ܰ߱���������������
          ޱ����߱��ܱܱ���������������
          ޱ�����ܱ��ܱ���������������
           ݱ�������߱����������������
           ޱ��������������������ܱ��
            �ܱ����������������ܱ����
              �ܱ������������߱�����
                ���������߱�������
                   ������������)" << '\n';
	
	}

private:
	std::string label;
};

// class SampleTest : public ::testing::Test
// {
// public:
// 	Sample s;

// 	void SetUp() override
// 	{
// 		s = Sample{ "Test" };
// 	}

// 	void TearDown() override
// 	{

// 	}

// };

// TEST_F(SampleTest, TestDefaultConstructor) {
// 	s = Sample{};
// 	ASSERT_EQ(s.getLabel(), "Empty");
// }

// TEST_F(SampleTest, TestLabelConstructor) {
// 	ASSERT_EQ(s.getLabel(), "Test");
// }

int main(int argc, char **argv)
{
	// ::testing::InitGoogleTest(&argc, argv);
	// RUN_ALL_TESTS();

	Sample sDef;
	Sample sAdv{"LMAO"};

	sDef.displayDoge();
	std::cout << sDef.getLabel() << '\n';
	std::cout << sAdv.getLabel() << '\n';

	return 0;
}