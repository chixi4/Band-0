
/* WARNING: Removing unreachable block (ram,0x4201295e) */

undefined4 FUN_ram_420128ea(uint param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 < 10000) {
    (*(code *)&SUB_ram_40010044)();
  }
  else {
    uVar4 = thunk_FUN_ram_40391178();
    uVar1 = uVar4 + param_1;
    uVar2 = (uint)uVar1 + 9999;
    do {
      uVar3 = uVar2 - (int)uVar4;
      (*(code *)&SUB_ram_400109f0)
                (uVar3,(((uint)(uVar2 < (uint)uVar1) + (int)(uVar1 >> 0x20)) - (int)(uVar4 >> 0x20))
                       - (uint)(uVar2 < uVar3),10000,0);
      FUN_ram_40396524();
      uVar4 = thunk_FUN_ram_40391178();
    } while (uVar4 < uVar1);
  }
  return 0;
}

