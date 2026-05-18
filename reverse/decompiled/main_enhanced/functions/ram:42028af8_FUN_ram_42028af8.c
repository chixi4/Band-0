
void FUN_ram_42028af8(undefined4 param_1,int param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  int iStack_38;
  undefined1 uStack_34;
  byte bStack_24;
  
  (*(code *)&SUB_ram_40010488)(&iStack_38,0,0x18);
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420279b4(param_1,0xff,0xffffffff,0);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0xd) == '\x05') {
      if (param_2 == 0) {
        *(undefined1 *)(iVar2 + 0xd) = 7;
        if (((*(byte *)(iVar2 + 8) & 1) == 0) || (*(char *)(iVar2 + 0xe) == '\0')) {
          bStack_24 = bStack_24 | 1;
        }
        uVar4 = (ushort)*(byte *)(iVar2 + 0xf);
      }
      else {
        *(undefined1 *)(iVar2 + 0xd) = 0xff;
        uVar4 = 0;
      }
      uVar1 = *(byte *)(iVar2 + 8) >> 3 & 1;
      cVar5 = '\0';
      goto LAB_ram_42028b88;
    }
    if (*(char *)(iVar2 + 0xd) == '\x06') {
      *(undefined1 *)(iVar2 + 0xd) = 0xff;
      cVar5 = '\x01';
      bStack_24 = bStack_24 | 8;
      uVar4 = (ushort)*(byte *)(iVar2 + 0xf);
      uVar1 = *(uint *)(iVar2 + 8) >> 3 & 1;
      goto LAB_ram_42028b88;
    }
    *(undefined1 *)(iVar2 + 0xd) = 0xff;
    uStack_34 = 8;
  }
  uVar4 = 0;
  cVar5 = '\0';
  uVar1 = 0;
LAB_ram_42028b88:
  if ((param_2 == 0) && (iVar3 = FUN_ram_420365de(param_1), iVar3 != 0)) {
    uVar6 = *(ushort *)(iVar3 + 0x68) & 0xfffe | param_3 & 1;
    *(ushort *)(iVar3 + 0x68) = uVar6;
    if (uVar1 != 0) {
      *(ushort *)(iVar3 + 0x68) = uVar6 | 2;
    }
    if (cVar5 != '\0') {
      *(ushort *)(iVar3 + 0x68) = *(ushort *)(iVar3 + 0x68) | 4;
    }
    if (uVar4 != 0) {
      *(ushort *)(iVar3 + 0x68) = *(ushort *)(iVar3 + 0x68) & 0xff07 | (uVar4 & 0x1f) << 3;
    }
  }
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0xd) == -1)) {
    bStack_24 = bStack_24 | 2;
    iStack_38 = 0;
    if (param_2 != 0) {
      iStack_38 = param_2 + 0x200;
    }
  }
  thunk_FUN_ram_4202b7f6();
  bStack_24 = bStack_24 & 0xfb | cVar5 << 2;
  FUN_ram_42028608(param_1,&iStack_38,1);
  return;
}

