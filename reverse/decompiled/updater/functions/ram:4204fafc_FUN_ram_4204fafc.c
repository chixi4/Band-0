
uint FUN_ram_4204fafc(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                     undefined4 *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort uStack_46;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  uint *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)FUN_ram_4204ed60();
  if (puVar1 == (undefined4 *)0x0) {
LAB_ram_4204fbae:
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(uint *)*puVar1 & 0xf0) == 0x10) {
      uVar2 = FUN_ram_4204ea00(puVar1,param_2,param_3,param_4);
      if ((param_5 != 0) && (param_6 != (undefined4 *)0x0)) {
        FUN_ram_42059e52(*puVar1,&iStack_3c,&uStack_44,0);
        FUN_ram_4204eb82(&iStack_3c,uStack_44 & 0xffff,param_5,param_6);
      }
    }
    else {
      puStack_34 = &uStack_44;
      uStack_46 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_30 = 1;
      uStack_38 = 0;
      if (param_6 != (undefined4 *)0x0) {
        uStack_38 = *param_6;
      }
      uStack_44 = param_2;
      uStack_40 = param_3;
      iStack_3c = param_5;
      iVar3 = FUN_ram_4204ebd2(puVar1,param_4,&iStack_3c,&uStack_46);
      if (iVar3 != 0) {
        iVar4 = FUN_ram_4205b1bc();
        if (iVar4 != 0) {
          puVar5 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar6 = FUN_ram_4205b1bc(iVar3);
          *puVar5 = uVar6;
        }
        FUN_ram_4204ecbc(puVar1);
        goto LAB_ram_4204fbae;
      }
      uVar2 = (uint)uStack_46;
      if (param_3 < uStack_46) {
        uVar2 = param_3;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = uStack_38;
      }
    }
    FUN_ram_4204ecbc(puVar1);
  }
  return uVar2;
}

