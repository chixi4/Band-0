
int FUN_ram_4205c8b4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int aiStack_14 [2];
  
  *(undefined4 *)(param_1 + 0x44) = param_2;
  aiStack_14[0] = param_1;
  iVar2 = FUN_ram_4205bd8e();
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4205c6a2(aiStack_14[0],param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(char *)(aiStack_14[0] + 0xc4) != '\0') &&
       (piVar4 = (int *)(*(code *)&SUB_ram_40010670)(), *piVar4 == 0xb)) {
      return 0x7007;
    }
  }
  else if ((*(char *)(aiStack_14[0] + 0xc4) != '\0') && (iVar2 == 0x7006)) {
    return 0x7007;
  }
  iVar1 = aiStack_14[0];
  uVar3 = FUN_ram_4206cb16(*(undefined4 *)(aiStack_14[0] + 0x1c));
  FUN_ram_4205b802(iVar1,0,uVar3,0);
  FUN_ram_4205b4f6(0,aiStack_14,4);
  return iVar2;
}

