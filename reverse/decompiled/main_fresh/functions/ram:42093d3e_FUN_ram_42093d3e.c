
void FUN_ram_42093d3e(void)

{
  *(undefined2 *)(gp + 0x700) = 9;
  *(undefined4 *)(gp + 0x6e4) = 0x600;
  *(undefined4 *)(gp + 0x6e8) = 0x400;
  *(undefined4 *)(gp + 0x6ec) = 0x400;
  *(undefined4 *)(gp + 0x6f0) = 0x200;
  *(undefined4 *)(gp + 0x6f4) = 0x200;
  *(undefined4 *)(gp + 0x6f8) = 0x92a2020;
  *(undefined2 *)(gp + 0x6fc) = 0x100;
  *(undefined4 *)(gp + 0x708) = 0xfff015f;
  (*(code *)&SUB_ram_40011dc4)(2,3,4,10,0);
  (*(code *)&SUB_ram_40011dc4)(3,7,4,10,0);
  (*(code *)&SUB_ram_40011dc4)(1,2,3,4,0xbc0);
  (*(code *)&SUB_ram_40011dc4)(0,2,2,3,0x5e0);
  (*(code *)&SUB_ram_40011dc4)(4,1,0,0,0);
  FUN_ram_4209695e(0x15f,1);
  FUN_ram_420949fa();
  return;
}

