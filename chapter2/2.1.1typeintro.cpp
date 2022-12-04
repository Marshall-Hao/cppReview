/*
 * short  2bytes 8bits
 * int  2/4 bytes
 * long 4/8bytes
 * long long 8bytes
 * float 32 6-7 -3.410(-38)～3.410(38) 常规6个有效数字
 * double 64 15-16 -1.710(-308)～1.710(308) 16个有效数字
 * long double 128 18-19 -1.210(-4932)～1.210(4932)
 *利率：float 单精度足够，不会丢失数据
 *本金：double 设计用户金额应该用更精确的数据类型
 *付款：double 付款也应该对数据精确度要求较高
 */