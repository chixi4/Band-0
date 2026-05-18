
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_ram_42053612(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5,code *param_6,undefined4 param_7)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *extraout_a2;
  int extraout_a3;
  undefined4 *extraout_a5;
  undefined4 *puVar5;
  undefined8 uVar6;
  
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
    uVar2 = DAT_ram_3fcc52d0;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0xf) = uVar2;
    param_1[4] = param_7;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 0x52) = 0;
    FUN_ram_42053552(param_1,param_2,param_3,param_4);
    iVar3 = (*param_6)(param_1);
    if (iVar3 == 0) {
      puVar4 = &DAT_ram_3fcc5000;
      uVar6 = CONCAT44(_DAT_ram_3fcc52d8,0xff);
      do {
        puVar5 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
        if ((uint)*(byte *)(param_1 + 0xf) == (uint)uVar6) {
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
        iVar3 = 0x100;
        while( true ) {
          if (puVar5 == (undefined4 *)0x0) {
            DAT_ram_3fcc52d0 = '\0';
            if (*(char *)(param_1 + 0xf) != -2) {
              DAT_ram_3fcc52d0 = *(char *)(param_1 + 0xf) + '\x01';
            }
            bVar1 = *(byte *)((int)param_1 + 0x39);
            *param_1 = (int)((ulonglong)uVar6 >> 0x20);
            *(undefined4 **)(puVar4 + 0x2d8) = param_1;
            if ((bVar1 & 0x20) != 0) {
              FUN_ram_4205b46a(param_1);
            }
            FUN_ram_4205350c(param_1,1,0);
            return param_1;
          }
          if (puVar5 != param_1) goto LAB_ram_4205373c;
          do {
            uVar6 = FUN_ram_4039bf1e();
            puVar4 = extraout_a2;
            iVar3 = extraout_a3;
            puVar5 = extraout_a5;
LAB_ram_4205373c:
            iVar3 = iVar3 + -1;
          } while (iVar3 == 0);
          if (*(char *)(puVar5 + 0xf) == *(char *)(param_1 + 0xf)) break;
          puVar5 = (undefined4 *)*puVar5;
        }
        *(char *)(param_1 + 0xf) = *(char *)(puVar5 + 0xf) + '\x01';
      } while( true );
    }
  }
  return (undefined4 *)0x0;
}

