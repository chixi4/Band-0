
void FUN_ram_4201277a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_ram_40390ff2(0x3fcb6620);
  lVar3 = FUN_ram_4201264c();
  FUN_ram_4039100a(0x3fcb6620);
  lVar4 = FUN_ram_420129cc();
  uVar2 = (undefined4)(lVar3 + lVar4);
  uVar1 = (undefined4)((ulonglong)(lVar3 + lVar4) >> 0x20);
  uVar5 = (*(code *)&SUB_ram_400109f0)(uVar2,uVar1,1000000,0);
  *param_1 = uVar5;
  uVar1 = (*(code *)&SUB_ram_40010a00)(uVar2,uVar1,1000000,0);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}

