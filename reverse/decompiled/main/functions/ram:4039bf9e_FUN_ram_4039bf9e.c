
void FUN_ram_4039bf9e(void)

{
  int unaff_retaddr;
  undefined1 auStack_2c [15];
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_4039c11e(auStack_2c,0x3fcb8624,0x10);
  uStack_1d = 0x30;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_1c = 0x78;
  (*(code *)&SUB_ram_4001057c)(unaff_retaddr + -4,(int)&uStack_1c + 1,0x10);
  FUN_ram_40396620(auStack_2c);
  return;
}

