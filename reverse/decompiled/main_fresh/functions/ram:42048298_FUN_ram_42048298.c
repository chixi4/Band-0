
undefined4 FUN_ram_42048298(uint *param_1)

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
            FUN_ram_42047bea(iVar1);
          }
          else {
            FUN_ram_42047f48();
          }
          if ((uVar3 & 4) == 0) {
            FUN_ram_420480ae(iVar1);
          }
          else {
            FUN_ram_420480f8();
          }
          if ((uVar3 & 2) == 0) {
            FUN_ram_42047f94(iVar1);
          }
          else {
            FUN_ram_4204801e();
          }
          if (param_1[3] == 0) {
            FUN_ram_42047c92(iVar1);
          }
          else {
            FUN_ram_42047c24();
          }
          if (param_1[4] == 0) {
            FUN_ram_42047d6c(iVar1);
          }
          else {
            FUN_ram_42047cfe();
          }
          FUN_ram_42047dd8(iVar1,param_1[5]);
          if (param_1[5] == 0) {
            FUN_ram_42047f06(iVar1);
          }
          else {
            FUN_ram_42047e9c();
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

