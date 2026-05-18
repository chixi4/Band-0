
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42030fbc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined1 uStack_25;
  undefined4 auStack_24 [4];
  
  iVar1 = FUN_ram_42030aba();
  *param_2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = FUN_ram_4202fef8(0xc,0x40,auStack_24);
    iVar1 = _DAT_ram_3fcb6bb4;
    if (iVar2 == 0) {
      *param_2 = 6;
    }
    else {
      FUN_ram_4039c11e(iVar2,_DAT_ram_3fcb6bb4,0x20);
      FUN_ram_4039c11e(iVar2 + 0x20,iVar1 + 0x20);
      iVar1 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),auStack_24[0]);
      *param_2 = iVar1;
      if (iVar1 == 0) {
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          return;
        }
        cVar4 = *(char *)(param_1 + 0xc);
        if (cVar4 != '\x02') {
          cVar4 = '\x01';
        }
        *(char *)(param_1 + 0xd) = cVar4;
        iVar1 = FUN_ram_42030b16(param_1,&uStack_25);
        if (iVar1 == 0) {
          uVar3 = FUN_ram_42028026(uStack_25);
          if (uVar3 == *(byte *)(param_1 + 0xd)) {
            *(undefined1 *)(param_2 + 2) = uStack_25;
          }
          iVar1 = FUN_ram_4202805a(param_1);
          if (iVar1 == 0) {
            return;
          }
          if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xc) != '\x03')) {
            return;
          }
          bVar5 = *(byte *)(param_2 + 5) | 1;
        }
        else {
          *param_2 = 3;
          *(undefined1 *)(param_2 + 1) = 8;
          bVar5 = *(byte *)(param_2 + 5) | 2;
        }
        *(byte *)(param_2 + 5) = bVar5;
        return;
      }
    }
  }
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  *(undefined1 *)(param_2 + 1) = 8;
  return;
}

