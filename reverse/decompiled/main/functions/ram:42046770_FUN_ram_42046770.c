
undefined4 FUN_ram_42046770(uint param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 - 1U < 0x28) {
    if (param_1 == 4) {
      puVar1 = &DAT_ram_3c0f7120;
    }
    else if (param_1 < 5) {
      if (param_1 == 1) {
        puVar1 = &DAT_ram_3c0f7138;
      }
      else {
        if (param_1 != 2) goto LAB_ram_42046780;
        puVar1 = &DAT_ram_3c0f712c;
      }
    }
    else {
      if (param_1 == 7) {
        return 0;
      }
      if (param_1 != 8) goto LAB_ram_42046780;
      puVar1 = &DAT_ram_3c0f7114;
    }
    return *(undefined4 *)(puVar1 + ((param_2 + 7) / 0x11) * 4);
  }
LAB_ram_42046780:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

