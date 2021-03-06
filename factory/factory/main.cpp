#include "factory.h"


int main() {
    std::cout << "开始工厂类模式程序!" << std::endl;
    std::cout << "测试加法工厂类!" << std::endl;
    OperationFactory* Factory = new FactoryAdd();
    AbstractOperation* Operation = Factory->CreateOperate();
    double parm1 = 2.5;
    double parm2 = 3.4;
    double result;
    Operation->set_term1(parm1);
    Operation->set_term2(parm2);
    result = Operation->Get_Result();
    delete Operation;
    Operation = NULL;
    delete Factory;
    Factory = NULL;
    std::cout << "加法工厂类完成，输出结果:" <<result<<std::endl;

    std::cout << "*****************************************"<<std::endl;
    std::cout << "测试减法工厂类!" << std::endl;
    Factory = new FactorySub();
    Operation = Factory->CreateOperate();
    Operation->set_term1(parm1);
    Operation->set_term2(parm2);
    result = Operation->Get_Result();
    delete Operation;
    Operation = NULL;
    delete Factory;
    Factory = NULL;
    std::cout << "减法工厂类完成，输出结果:" <<result<<std::endl;

    std::cout << "*****************************************"<<std::endl;
    std::cout << "测试乘法工厂类!" << std::endl;
    Factory = new FactoryMul();
    Operation = Factory->CreateOperate();
    Operation->set_term1(parm1);
    Operation->set_term2(parm2);
    result = Operation->Get_Result();
    delete Operation;
    Operation = NULL;
    delete Factory;
    Factory = NULL;
    std::cout << "乘法工厂类完成，输出结果:" <<result<<std::endl;

    std::cout << "*****************************************"<<std::endl;
    std::cout << "测试除法工厂类!" << std::endl;
    Factory = new FactoryDiv();
    Operation = Factory->CreateOperate();
    Operation->set_term1(parm1);
    Operation->set_term2(parm2);
    result = Operation->Get_Result();
    delete Operation;
    Operation = NULL;
    delete Factory;
    Factory = NULL;
    std::cout << "除法工厂类完成，输出结果:" <<result<<std::endl;

    return 0;
}

//#include "test_factory.h"

//int main(){
//    AbstractFactory* factory = new SimpleFactory();
//    AbstractProduct* product = factory->createProduct(1);
//    product->operation();
//    delete product;
//    product = NULL;
//    product = factory->createProduct(2);
//    product->operation();
//    delete product;
//    product = NULL;
//    return 0;
//}
