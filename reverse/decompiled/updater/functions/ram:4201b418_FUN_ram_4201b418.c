
void FUN_ram_4201b418(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0xf) {
    do {
      iVar4 = param_1 * 2 + 1;
      iVar3 = param_1 * 2 + 2;
      if (*(uint *)(&DAT_ram_3fcb359c + iVar4 * 8) >> 3 <
          *(uint *)(&DAT_ram_3fcb359c + iVar3 * 8) >> 3) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3 * 8;
      param_1 = param_1 * 8;
      uVar1 = *(undefined4 *)(&DAT_ram_3fcb3598 + param_1);
      uVar2 = *(undefined4 *)(&DAT_ram_3fcb359c + param_1);
      *(undefined4 *)(&DAT_ram_3fcb3598 + param_1) = *(undefined4 *)(&DAT_ram_3fcb3598 + iVar4);
      *(undefined4 *)(&DAT_ram_3fcb359c + param_1) = *(undefined4 *)(&DAT_ram_3fcb359c + iVar4);
      *(undefined4 *)(&DAT_ram_3fcb3598 + iVar4) = uVar1;
      *(undefined4 *)(&DAT_ram_3fcb359c + iVar4) = uVar2;
      param_1 = iVar3;
    } while (iVar3 < 0xf);
    return;
  }
  return;
}

