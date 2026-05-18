
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420829cc(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = _DAT_ram_3fcc4018;
  puVar2 = *(undefined1 **)(param_1 + 0xc);
  uVar5 = 0x102;
  if (puVar2 != (undefined1 *)0x0) {
    bVar1 = *(byte *)(param_1 + 10);
    iVar6 = (*(code *)&SUB_ram_40011f9c)(puVar2);
    if (iVar6 == 0) {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc670,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
      uVar5 = 0x105;
    }
    else {
      iVar7 = *(int *)(iVar4 + 0xec);
      if (iVar7 == iVar6) {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc614);
        iVar6 = FUN_ram_42075b46(iVar7,0xc0,bVar1);
        piVar3 = (int *)(iVar4 + 0xf0);
        for (iVar4 = 1; iVar4 <= (int)(uint)*(byte *)(*(int *)(gp + -0xb4) + 0x3f6);
            iVar4 = iVar4 + 1) {
          if ((*piVar3 != 0) && (*(ushort *)(*piVar3 + 0x3b0) = (ushort)bVar1, iVar6 != 0)) {
            FUN_ram_42087eec();
          }
          piVar3 = piVar3 + 1;
        }
      }
      else {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc638,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
        iVar4 = FUN_ram_42075b46(iVar6,0xc0,bVar1);
        *(ushort *)(iVar6 + 0x3b0) = (ushort)bVar1;
        if (iVar4 != 0) {
          FUN_ram_42087eec(iVar6);
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

