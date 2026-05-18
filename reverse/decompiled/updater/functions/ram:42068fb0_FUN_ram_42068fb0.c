
int FUN_ram_42068fb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_ram_42068f0a(0x41,0x5a,param_1,param_1 - 0x40U & 0xff);
  uVar2 = FUN_ram_42068f0a(0x61,0x7a,param_1,param_1 - 0x46U & 0xff);
  uVar3 = FUN_ram_42068f0a(0x30,0x39,param_1,param_1 + 5U & 0xff);
  uVar4 = FUN_ram_42068f0a(0x2b,0x2b,param_1,param_1 + 0x14U & 0xff);
  uVar5 = FUN_ram_42068f0a(0x2f,0x2f,param_1,param_1 + 0x11U & 0xff);
  return (int)(((uVar5 | (uVar1 | uVar2) & 0xff | uVar3 & 0xff | uVar4 & 0xff) - 1) * 0x1000000) >>
         0x18;
}

