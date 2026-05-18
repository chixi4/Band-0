
undefined4 FUN_ram_4203bff0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_1 != 0) {
    FUN_ram_4203bf94();
    iVar6 = FUN_ram_420384d8();
    if (iVar6 == 0) {
      FUN_ram_4203bf68();
      uVar7 = 0x3008;
    }
    else {
      if (*(int *)(iVar6 + 4) == -1) {
        (*(code *)&SUB_ram_40010488)(iVar6 + 4,0,0x24);
        (*(code *)&SUB_ram_40010488)(iVar6 + 0x2f,0,0x40);
      }
      FUN_ram_40399daa(param_1,iVar6 + 8,0x20);
      FUN_ram_40399daa(param_1 + 0x20,iVar6 + 0x2f,0x40);
      *(uint *)(param_1 + 0x60) = (uint)*(byte *)(iVar6 + 0x35c);
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(iVar6 + 0x92);
      FUN_ram_40399daa(param_1 + 0x65,iVar6 + 0x93,6);
      *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(iVar6 + 0x90);
      *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(iVar6 + 0x9a);
      *(uint *)(param_1 + 0x70) = (uint)*(byte *)(iVar6 + 0x35d);
      *(uint *)(param_1 + 0x78) = (uint)*(byte *)(iVar6 + 0x35f);
      *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(iVar6 + 0x35e);
      *(bool *)(param_1 + 0x80) = *(char *)(iVar6 + 0x360) != '\0';
      *(bool *)(param_1 + 0x81) = *(char *)(iVar6 + 0x361) != '\0';
      bVar1 = *(byte *)(iVar6 + 0x363);
      bVar2 = *(byte *)(iVar6 + 0x362);
      bVar3 = *(byte *)(iVar6 + 0x364);
      bVar4 = *(byte *)(iVar6 + 0x414);
      bVar5 = *(byte *)(iVar6 + 0x415);
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(iVar6 + 0x448);
      *(byte *)(param_1 + 0x82) =
           (bVar1 & 1) << 1 | bVar2 & 1 | (bVar3 & 1) << 2 | (bVar4 & 1) << 3 | (bVar5 & 1) << 4 |
           (*(byte *)(iVar6 + 0x416) & 1) << 5 | *(byte *)(param_1 + 0x82) & 0xc0;
      uVar7 = 1;
      if (*(char *)(iVar6 + 0x417) != '\0') {
        uVar7 = 3;
        if (*(char *)(iVar6 + 0x417) == '\x01') {
          uVar7 = 2;
        }
      }
      *(undefined4 *)(param_1 + 0x88) = uVar7;
      *(uint *)(param_1 + 0x8c) = (uint)*(byte *)(iVar6 + 0x418);
      FUN_ram_40399daa(param_1 + 0x97,iVar6 + 0x451,0x20);
      FUN_ram_4203bf68();
      uVar7 = 0;
    }
    return uVar7;
  }
  return 0x102;
}

