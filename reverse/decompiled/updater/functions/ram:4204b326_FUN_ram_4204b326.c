
void FUN_ram_4204b326(void)

{
  *(undefined2 *)(gp + 0x5cc) = 9;
  *(undefined4 *)(gp + 0x5b0) = 0x600;
  *(undefined4 *)(gp + 0x5b4) = 0x400;
  *(undefined4 *)(gp + 0x5b8) = 0x400;
  *(undefined4 *)(gp + 0x5bc) = 0x200;
  *(undefined4 *)(gp + 0x5c0) = 0x200;
  *(undefined4 *)(gp + 0x5c4) = 0x92a2020;
  *(undefined2 *)(gp + 0x5c8) = 0x100;
  *(undefined4 *)(gp + 0x5d4) = 0xfff015f;
  (*(code *)&SUB_ram_40011dc4)(2,3,4,10,0);
  (*(code *)&SUB_ram_40011dc4)(3,7,4,10,0);
  (*(code *)&SUB_ram_40011dc4)(1,2,3,4,0xbc0);
  (*(code *)&SUB_ram_40011dc4)(0,2,2,3,0x5e0);
  (*(code *)&SUB_ram_40011dc4)(4,1,0,0,0);
  FUN_ram_4204de92(0x15f,1);
  FUN_ram_4204bfe2();
  return;
}

