
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42022edc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [16];
  
  iVar1 = _DAT_ram_3fcb369c;
  if (_DAT_ram_3fcb369c != 0) {
    uVar2 = FUN_ram_42021610(_DAT_ram_3fcb369c);
    iVar3 = FUN_ram_4207b54a(uVar2,auStack_28);
    if ((iVar3 == 0) &&
       (((iVar3 = FUN_ram_4207b55a(uVar2), iVar3 == 0 ||
         (iVar3 = FUN_ram_4207b55e(uVar2,0x420117a6,iVar1), iVar3 == 0)) &&
        (iVar3 = FUN_ram_4203d53c(0x4201174c,0x42011750), iVar3 == 0)))) {
      FUN_ram_42021710(iVar1,auStack_28);
      thunk_FUN_ram_4202172c(iVar1,param_2,param_3,param_4);
    }
  }
  return;
}

