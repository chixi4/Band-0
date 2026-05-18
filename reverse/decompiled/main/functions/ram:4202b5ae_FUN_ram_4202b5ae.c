
undefined4
FUN_ram_4202b5ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  (*(code *)&SUB_ram_40011acc)(auStack_70,param_3);
  (*(code *)&SUB_ram_40011acc)(auStack_50,param_1,0x20);
  (*(code *)&SUB_ram_40011acc)(auStack_30,param_2,0x20);
  uVar1 = FUN_ram_42035760();
  iVar2 = FUN_ram_42035988(auStack_50,uVar1);
  if (-1 < iVar2) {
    uVar1 = FUN_ram_42035760();
    iVar2 = FUN_ram_4203617e(auStack_50,auStack_70,auStack_90,uVar1);
    if (iVar2 != 0) {
      (*(code *)&SUB_ram_40011acc)(param_4,auStack_90,0x20);
      uVar1 = 0;
      goto LAB_ram_4202b604;
    }
  }
  uVar1 = 0x11;
LAB_ram_4202b604:
  (*(code *)&SUB_ram_40010488)(auStack_90,0,0x20);
  (*(code *)&SUB_ram_40010488)(auStack_70,0);
  return uVar1;
}

