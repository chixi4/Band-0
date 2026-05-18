
int FUN_ram_42065da8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_ram_42065ad4();
  if ((iVar1 == 0) &&
     (puVar2 = (undefined4 *)FUN_ram_42065a7a(param_1), puVar2 != (undefined4 *)0x0)) {
    (*(code *)&SUB_ram_40010488)(puVar2 + 1,0,0xbc);
    puVar2[7] = 0x4205676c;
    puVar2[8] = 0x42056794;
    uVar4 = *(undefined4 *)(param_1 + 0x3fc);
    uVar3 = *(undefined4 *)(param_1 + 0x3f8);
    *puVar2 = param_2;
    puVar2[0xb] = uVar4;
    iVar1 = *(int *)(param_1 + 0x78);
    puVar2[4] = param_1;
    puVar2[10] = uVar3;
    *(int *)(param_1 + 0x78) = iVar1 + 1;
    iVar1 = 0;
    if ((*(code **)(param_1 + 0x54) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x54))(param_1,param_2), iVar1 != 0)) {
      FUN_ram_42065c14(param_1,puVar2);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

