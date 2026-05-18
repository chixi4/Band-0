
uint FUN_ram_40395c1a(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  FUN_ram_40396232();
  *param_1 = *param_1 | param_2;
  uVar1 = 0;
  puVar6 = (uint *)param_1[4];
LAB_ram_40395c4a:
  do {
    puVar2 = puVar6;
    uVar3 = *param_1;
    if (puVar2 == param_1 + 3) {
      *param_1 = ~uVar1 & uVar3;
      FUN_ram_403963e2();
      return *param_1;
    }
    puVar6 = (uint *)puVar2[1];
    uVar4 = *puVar2;
    uVar5 = uVar4 & 0xffffff;
    if ((int)(uVar4 << 5) < 0) goto LAB_ram_40395c8c;
  } while ((uVar5 & uVar3) == 0);
  goto LAB_ram_40395c90;
LAB_ram_40395c8c:
  if (uVar5 == (uVar5 & uVar3)) {
LAB_ram_40395c90:
    if ((int)(uVar4 << 7) < 0) {
      uVar1 = uVar1 | uVar5;
    }
    FUN_ram_4039674c(puVar2,uVar3 | 0x2000000);
  }
  goto LAB_ram_40395c4a;
}

