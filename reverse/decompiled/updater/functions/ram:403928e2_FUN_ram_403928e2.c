
int FUN_ram_403928e2(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puStack_28;
  uint *apuStack_24 [2];
  
  puVar1 = (uint *)*param_2;
  uVar3 = *puVar1;
  iVar5 = *(int *)(param_1 + 0x9c);
  puVar4 = puVar1 + 9;
  if ((uVar3 & 4) == 0) {
    puVar4 = (uint *)puVar1[9];
  }
  puStack_28 = puVar4;
  if ((uVar3 & 8) == 0) {
    apuStack_24[0] = (uint *)puVar1[8];
    if (apuStack_24[0] != (uint *)0x0) goto LAB_ram_4039291a;
  }
  else {
    apuStack_24[0] = puVar1 + 8;
LAB_ram_4039291a:
    if (*(char *)(iVar5 + 0x40) == '\0') goto LAB_ram_40392944;
    iVar2 = FUN_ram_403927a8(param_1,apuStack_24[0],puVar1[4] + 7 >> 3,1,uVar3,apuStack_24);
    if (iVar2 != 0) goto LAB_ram_40392932;
  }
  if (((puVar4 != (uint *)0x0) && (*(char *)(iVar5 + 0x40) != '\0')) &&
     (iVar2 = FUN_ram_403927a8(param_1,puVar4,puVar1[5] + 7 >> 3,0,*puVar1,&puStack_28), iVar2 != 0)
     ) {
LAB_ram_40392932:
    FUN_ram_40392506(param_2);
    return iVar2;
  }
LAB_ram_40392944:
  param_2[1] = (int)apuStack_24[0];
  param_2[2] = (int)puStack_28;
  return 0;
}

