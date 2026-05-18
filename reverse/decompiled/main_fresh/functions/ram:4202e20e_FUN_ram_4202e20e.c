
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202e20e(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_114 [4];
  undefined4 uStack_110;
  
  (*(code *)&SUB_ram_40010488)(auStack_114,0,0x104);
  auStack_114[0] = 9;
  uStack_110 = param_1;
  FUN_ram_4202e1e0(auStack_114);
  thunk_FUN_ram_4202b7dc();
  pcVar1 = *(code **)(_DAT_ram_3fcb6ba0 + 0x118);
  uVar2 = *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x11c);
  FUN_ram_4202e0fa(0);
  thunk_FUN_ram_4202b7f6();
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(auStack_114,uVar2);
  }
  return;
}

