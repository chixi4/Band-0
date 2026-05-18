
undefined4 FUN_ram_403a673e(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  iVar1 = FUN_ram_403930b8(*(undefined4 *)*param_1,&uStack_18);
  if (iVar1 == 0) {
    uVar2 = (*(code *)&SUB_ram_400109f0)(uStack_18,uStack_14,1000,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

