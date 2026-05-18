
void FUN_ram_42012522(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_ram_403917e0(0x3fcc4ec0);
  lVar3 = FUN_ram_420123e4();
  FUN_ram_403917f8(0x3fcc4ec0);
  lVar4 = FUN_ram_420b617c();
  uVar2 = (undefined4)(lVar3 + lVar4);
  uVar1 = (undefined4)((ulonglong)(lVar3 + lVar4) >> 0x20);
  uVar5 = (*(code *)&SUB_ram_400109f0)(uVar2,uVar1,1000000,0);
  *param_1 = uVar5;
  uVar1 = (*(code *)&SUB_ram_40010a00)(uVar2,uVar1,1000000,0);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}

