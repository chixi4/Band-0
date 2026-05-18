
char FUN_ram_42051d02(int *param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  byte bVar6;
  
  cVar2 = '\0';
  if (param_1 != (int *)0x0) {
    cVar2 = '\0';
    piVar5 = param_1;
    do {
      FUN_ram_420599c2(param_1);
      cVar1 = *(char *)((int)piVar5 + 0xe);
      *(char *)((int)piVar5 + 0xe) = cVar1 + -1;
      FUN_ram_420599ec();
      if (cVar1 != '\x01') {
        return cVar2;
      }
      piVar3 = (int *)*piVar5;
      if ((*(byte *)((int)piVar5 + 0xd) & 2) == 0) {
        param_1 = (int *)0xe;
        uVar4 = 0xe;
        bVar6 = *(byte *)(piVar5 + 3) & 0xf;
        if (bVar6 != 2) {
          if (bVar6 != 1) {
            if ((*(byte *)(piVar5 + 3) & 0xf) == 0) {
              param_1 = (int *)thunk_FUN_ram_40390608(piVar5);
            }
            goto LAB_ram_42051d48;
          }
          uVar4 = 0xd;
        }
        param_1 = (int *)FUN_ram_4205151c(uVar4);
      }
      else {
        param_1 = (int *)(*(code *)piVar5[4])(piVar5);
      }
LAB_ram_42051d48:
      cVar2 = cVar2 + '\x01';
      piVar5 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  return cVar2;
}

