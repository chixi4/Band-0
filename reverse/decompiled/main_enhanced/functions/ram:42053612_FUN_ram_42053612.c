
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_ram_42053612(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5,code *param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (param_6 != (code *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      param_2 = &DAT_ram_3c0f7590;
    }
    if (param_3 == (undefined4 *)0x0) {
      param_3 = &DAT_ram_3c0f7590;
    }
    if (param_4 == (undefined4 *)0x0) {
      param_4 = &DAT_ram_3c0f7590;
    }
    param_1[5] = 0x42043214;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    (*(code *)&SUB_ram_40010488)(param_1 + 8,0,0xc);
    param_1[7] = param_5;
    uVar1 = DAT_ram_3fcc52d0;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0xf) = uVar1;
    param_1[4] = param_7;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 0x52) = 0;
    FUN_ram_42053552(param_1,param_2,param_3,param_4);
    iVar3 = (*param_6)(param_1);
    puVar2 = _DAT_ram_3fcc52d8;
    if (iVar3 == 0) {
      do {
        if (*(char *)(param_1 + 0xf) == -1) {
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
        iVar3 = 0x100;
        puVar4 = puVar2;
        while( true ) {
          if (puVar4 == (undefined4 *)0x0) {
            DAT_ram_3fcc52d0 = '\0';
            if (*(char *)(param_1 + 0xf) != -2) {
              DAT_ram_3fcc52d0 = *(char *)(param_1 + 0xf) + '\x01';
            }
            *param_1 = puVar2;
            _DAT_ram_3fcc52d8 = param_1;
            if ((*(byte *)((int)param_1 + 0x39) & 0x20) != 0) {
              FUN_ram_4205b46a(param_1);
            }
            FUN_ram_4205350c(param_1,1,0);
            return param_1;
          }
          if ((puVar4 == param_1) || (iVar3 = iVar3 + -1, iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4039bf1e();
          }
          if (*(char *)(puVar4 + 0xf) == *(char *)(param_1 + 0xf)) break;
          puVar4 = (undefined4 *)*puVar4;
        }
        *(char *)(param_1 + 0xf) = *(char *)(puVar4 + 0xf) + '\x01';
      } while( true );
    }
  }
  return (undefined4 *)0x0;
}

