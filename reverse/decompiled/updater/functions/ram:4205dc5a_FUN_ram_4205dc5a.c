
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4205dc5a(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_ram_3fcb6854 = gp + -0x49c;
  puVar2 = (undefined4 *)FUN_ram_40399d1a(1,0x6c);
  iVar1 = 0x101;
  _DAT_ram_3fcb6850 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x4204d9ec;
    puVar2[1] = 0x4204da14;
    puVar2[5] = 0x42053f22;
    puVar2[2] = 0x4204dbe2;
    puVar2[3] = 0x4204db4a;
    puVar2[4] = 0x4204da9a;
    puVar2[6] = 0x42054b04;
    puVar2[0xe] = 0x42012808;
    puVar2[0xf] = 0x4204da48;
    puVar2[0x11] = 0x42054910;
    puVar2[0x16] = 0x4204da12;
    puVar2[0x19] = 0x42054b4e;
    puVar2[0x1a] = 0x4204da3a;
    puVar2[0x10] = 0;
    puVar2[0x14] = 0;
    FUN_ram_4205e35c();
    FUN_ram_4205e3be(_DAT_ram_3fcb6850);
    FUN_ram_4205ee7a();
    iVar1 = FUN_ram_4205ddc6(_DAT_ram_3fcb6850);
    if (iVar1 == 0) {
      FUN_ram_42039274(_DAT_ram_3fcb6850);
    }
  }
  return iVar1;
}

