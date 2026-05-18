
byte FUN_ram_420a83ba(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  bVar1 = FUN_ram_420a839e(0,0x19,param_1,param_1 + 0x41U & 0xff);
  bVar2 = FUN_ram_420a839e(0x1a,0x33,param_1,param_1 + 0x47U & 0xff);
  bVar3 = FUN_ram_420a839e(0x34,0x3d,param_1,param_1 - 4U & 0xff);
  bVar4 = FUN_ram_420a839e(0x3e,0x3e,param_1,0x2b);
  bVar5 = FUN_ram_420a839e(0x3f,0x3f,param_1,0x2f);
  return bVar5 | bVar1 | bVar2 | bVar3 | bVar4;
}

