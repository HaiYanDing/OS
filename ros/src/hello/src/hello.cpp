#include "rclcpp/rclcpp.hpp"
class MyNode:public rclcpp::Node
{
	public:
		MyNode(std::string name):Node(name)
		{
			RCLCPP_INFO(this->get_logger(),"this is a %s",name.c_str());
		}
	private:
};
int main(int argc, char**argv)
{
	rclcpp::init(argc,argv);
	auto node = std::make_shared<MyNode>("leon");
	rclcpp::spin(node);
	rclcpp::shutdown();
	return 0;

}
