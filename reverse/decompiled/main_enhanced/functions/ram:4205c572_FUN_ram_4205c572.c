
void FUN_ram_4205c572(int param_1,uint param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if ((param_2 < 0xd) && ((0x107bU >> (param_2 & 0x1f) & 1) != 0)) {
    uVar1 = *param_4;
    if (*(byte *)(param_1 + 0x38) + 4 + (uint)uVar1 < 0x46) {
      *param_4 = *(byte *)(param_1 + 0x38) + uVar1 + 3;
      puVar2 = (undefined1 *)(param_3 + 0xf0 + (uint)uVar1);
      *puVar2 = 0x3d;
      puVar2[1] = *(char *)(param_1 + 0x38) + '\x01';
      puVar2[2] = 1;
      for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 0x38); uVar3 = uVar3 + 1) {
        puVar2[uVar3 + 3] = *(undefined1 *)(param_1 + uVar3 + 0x32);
      }
    }
  }
  return;
}

