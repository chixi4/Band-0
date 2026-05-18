
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4205da9a(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < 0x10) {
    if ((param_1 < 2) || ((0x80c4U >> (param_1 & 0x1f) & 1) == 0)) goto LAB_ram_4205db2a;
  }
  else if (param_1 < 0x34) {
    if (param_1 < 0x31) {
LAB_ram_4205db2a:
      if (DAT_ram_3fcb6858 != '\0') {
        FUN_ram_42064b4e();
      }
      goto LAB_ram_4205dad0;
    }
  }
  else if (3 < (param_1 + 0x36 & 0xff)) goto LAB_ram_4205db2a;
  FUN_ram_42064b4e();
  FUN_ram_42064f86(0x3fcb5ffc);
LAB_ram_4205dad0:
  _DAT_ram_3fcb6164 = 0;
  _DAT_ram_3fcb615c = 0;
  _DAT_ram_3fcb6160 = 0;
  _DAT_ram_3fcb621c = 0;
  FUN_ram_42062f78(0x3fcb5ffc);
  DAT_ram_3fcb6200 = 0;
  DAT_ram_3fcb631c = 0;
  puVar1 = (undefined4 *)FUN_ram_4205de76();
  if ((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) {
    (*(code *)*puVar1)();
  }
  FUN_ram_4205e386();
  FUN_ram_4205e186();
  return param_1;
}

