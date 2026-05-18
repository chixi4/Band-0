
void FUN_ram_40393d3e(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  
  do {
    uVar1 = FUN_ram_40393eee();
    uVar2 = FUN_ram_40393f2c();
    if (uVar1 == 0 && uVar2 == 0) {
      return;
    }
    FUN_ram_40393ef8(uVar1);
    FUN_ram_40393f34(uVar2);
    if ((uVar2 & 3) != 0) {
      FUN_ram_40393cfc();
    }
    if ((uVar2 & 0xc0) != 0) {
      FUN_ram_40393d08();
    }
    if ((uVar1 & unaff_s2) != 0) {
      FUN_ram_40393d14();
    }
    if ((uVar1 & unaff_s3) != 0) {
      (*(code *)&SUB_ram_40011c5c)(0xe,1);
    }
    if ((uVar1 & unaff_s4) != 0) {
      (*(code *)&SUB_ram_40011b38)();
    }
    if ((uVar1 & 0x80) != 0) {
      (*(code *)&SUB_ram_40011b2c)();
    }
    if ((uVar1 & unaff_s5) != 0) {
      (*(code *)&SUB_ram_40011b30)();
    }
  } while ((uVar1 & 0x100) == 0);
  (*(code *)0x40011b34)();
  FUN_ram_40393d3e();
  return;
}

