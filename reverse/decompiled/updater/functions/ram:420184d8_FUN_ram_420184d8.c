
undefined4 FUN_ram_420184d8(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  if (uVar4 == 0 && uVar5 == 0) {
    uVar2 = 0x102;
  }
  else {
    uVar2 = 0x102;
    if (uVar4 >> 0x15 == 0) {
      iVar1 = 0;
      do {
        uVar3 = (*(code *)&SUB_ram_40010974)(uVar4,uVar5,iVar1);
        if ((uVar3 & 1) != 0) {
          uVar3 = param_1[2];
          if ((uVar3 & 1) == 0) {
            FUN_ram_42017ea6(iVar1);
          }
          else {
            FUN_ram_42018204();
          }
          if ((uVar3 & 4) == 0) {
            FUN_ram_4201836a(iVar1);
          }
          else {
            FUN_ram_420183b4();
          }
          if ((uVar3 & 2) == 0) {
            FUN_ram_42018250(iVar1);
          }
          else {
            FUN_ram_420182da();
          }
          if (param_1[3] == 0) {
            FUN_ram_42017f4e(iVar1);
          }
          else {
            FUN_ram_42017ee0();
          }
          if (param_1[4] == 0) {
            FUN_ram_42018028(iVar1);
          }
          else {
            FUN_ram_42017fba();
          }
          FUN_ram_42018094(iVar1,param_1[5]);
          if (param_1[5] == 0) {
            FUN_ram_420181c2(iVar1);
          }
          else {
            FUN_ram_42018158();
          }
          *(uint *)(&DAT_ram_60009004 + iVar1 * 4) =
               *(uint *)(&DAT_ram_60009004 + iVar1 * 4) & 0xffff8fff | 0x1000;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x15);
      uVar2 = 0;
    }
  }
  return uVar2;
}

