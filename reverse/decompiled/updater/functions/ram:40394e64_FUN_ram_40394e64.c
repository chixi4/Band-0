
void FUN_ram_40394e64(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_68 [23];
  
  local_68[0] = 0x3c0705a8;
  puVar1 = local_68 + 3;
  local_68[2] = 0x3c0705d0;
  local_68[1] = param_2;
  (*(code *)&SUB_ram_40010488)(puVar1,0,0x4b);
  puVar2 = local_68;
  puVar3 = puVar1;
  do {
    uVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_4001050c)(puVar3,uVar6);
  } while (puVar1 != puVar2);
  iVar4 = FUN_ram_40394adc(puVar1);
  if (*(int *)(iVar4 + 0x54) != 0) {
    iVar5 = FUN_ram_4039381a();
    if (iVar5 == 0) {
      FUN_ram_40399b58();
    }
                    /* WARNING: Could not recover jumptable at 0x40394ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar4 + 0x54))(0,*(undefined4 *)(iVar4 + 0x50));
    return;
  }
  return;
}

