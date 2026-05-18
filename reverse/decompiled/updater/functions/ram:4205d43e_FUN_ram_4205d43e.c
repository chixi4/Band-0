
void FUN_ram_4205d43e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  FUN_ram_4207593c();
  FUN_ram_42073e96(1);
  iVar1 = FUN_ram_40399d1a(1,0x770);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40399b58();
  }
  iVar2 = (*(code *)&SUB_ram_40010018)(0);
  iVar3 = FUN_ram_4205d2e2(iVar1);
  cVar4 = '\x02';
  if (iVar3 == 0) {
    cVar4 = iVar2 == 5;
  }
  FUN_ram_4204e5f2(&uStack_28);
  *(undefined4 *)(iVar1 + 4) = uStack_28;
  *(undefined2 *)(iVar1 + 8) = uStack_24;
  iVar2 = FUN_ram_420747b4(0x3c079478,iVar1,cVar4);
  if ((cVar4 != '\x01') && ((iVar3 != 0 || (iVar2 == 1)))) {
    FUN_ram_4205d3ae(iVar1);
  }
  FUN_ram_4201231e(0x40383214);
  FUN_ram_4201231e(0x42063e5e);
  thunk_FUN_ram_40390608(iVar1);
  return;
}

