
void FUN_ram_42036658(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 auStack_14 [2];
  
  uVar1 = FUN_ram_420315b6(*(undefined1 *)(param_1 + 4));
  *param_2 = (char)uVar1;
  iVar2 = FUN_ram_42036ba2(uVar1,auStack_14,0);
  if (iVar2 == 0) {
    FUN_ram_4039c11e(param_2 + 1,auStack_14[0],6);
    iVar2 = FUN_ram_4039c0e0(param_1 + 0x10,&DAT_ram_3c0f5718,6);
    puVar3 = param_2;
    if (iVar2 != 0) {
      puVar3 = (undefined1 *)(param_1 + 0xf);
    }
    FUN_ram_4039c11e(param_2 + 0xe,puVar3,7);
    FUN_ram_4039c11e(param_2 + 7);
    uVar1 = FUN_ram_4039c11e(param_2 + 0x15,param_1 + 8,7);
    if (*(char *)(param_1 + 8) == '\x02') {
      param_2[7] = 0;
    }
    else {
      if (*(char *)(param_1 + 8) != '\x03') {
        return;
      }
      param_2[7] = 1;
    }
    FUN_ram_4039c11e(uVar1,param_1 + 0x16,7);
  }
  return;
}

