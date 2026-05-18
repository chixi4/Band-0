
void FUN_ram_4202015a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_3c [44];
  
  iVar1 = FUN_ram_42015de2(param_2,param_3,local_3c);
  if (iVar1 == 0) {
    param_4 = local_3c;
  }
  FUN_ram_4201fe48(param_1);
  iVar1 = 0;
  do {
    puVar2 = param_4 + iVar1;
    iVar1 = iVar1 + 1;
    FUN_ram_4201fe50(*puVar2);
  } while (iVar1 != 0x2a);
  return;
}

