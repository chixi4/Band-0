
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_ram_420518c8(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                undefined4 param_5,code *param_6,undefined4 param_7)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (param_6 != (code *)0x0)) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_ram_3c0793d4;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = &DAT_ram_3c0793d4;
    }
    if (param_4 == (undefined1 *)0x0) {
      param_4 = &DAT_ram_3c0793d4;
    }
    param_1[5] = 0x42041550;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    (*(code *)&SUB_ram_40010488)(param_1 + 8,0,0xc);
    param_1[7] = param_5;
    uVar1 = DAT_ram_3fcb67a4;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0xf) = uVar1;
    param_1[4] = param_7;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 0x52) = 0;
    FUN_ram_42051808(param_1,param_2,param_3,param_4);
    iVar2 = (*param_6)(param_1);
    if (iVar2 == 0) {
      do {
        cVar4 = *(char *)(param_1 + 0xf);
        piVar3 = _DAT_ram_3fcb67ac;
        if (cVar4 == -1) {
          *(undefined1 *)(param_1 + 0xf) = 0;
          cVar4 = '\0';
        }
        while( true ) {
          if (piVar3 == (int *)0x0) {
            DAT_ram_3fcb67a4 = '\0';
            if (cVar4 != -2) {
              DAT_ram_3fcb67a4 = cVar4 + '\x01';
            }
            *param_1 = _DAT_ram_3fcb67ac;
            _DAT_ram_3fcb67ac = param_1;
            if ((*(byte *)((int)param_1 + 0x39) & 0x20) != 0) {
              FUN_ram_42058646(param_1);
            }
            FUN_ram_420517cc(param_1,1,0);
            return param_1;
          }
          if (*(char *)(piVar3 + 0xf) == cVar4) break;
          piVar3 = (int *)*piVar3;
        }
        *(char *)(param_1 + 0xf) = cVar4 + '\x01';
      } while( true );
    }
  }
  return (undefined4 *)0x0;
}

