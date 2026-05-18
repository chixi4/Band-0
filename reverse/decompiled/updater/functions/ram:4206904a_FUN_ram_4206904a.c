
undefined4
FUN_ram_4206904a(undefined1 *param_1,uint param_2,uint *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_5 == 0) {
    *param_3 = 0;
LAB_ram_4206906a:
    uVar6 = 0;
  }
  else {
    uVar7 = (uint)(param_5 % 3 != 0) + param_5 / 3;
    if (uVar7 < 0x40000000) {
      uVar7 = uVar7 * 4 + 1;
      if ((uVar7 <= param_2) && (param_1 != (undefined1 *)0x0)) {
        puVar4 = param_1;
        for (uVar7 = 0; uVar7 < (param_5 / 3) * 3; uVar7 = uVar7 + 3) {
          bVar1 = *param_4;
          bVar2 = param_4[1];
          bVar3 = param_4[2];
          uVar5 = FUN_ram_42068f26(bVar1 >> 2);
          *puVar4 = uVar5;
          uVar5 = FUN_ram_42068f26(((int)(uint)bVar2 >> 4) + (bVar1 & 3) * 0x10);
          puVar4[1] = uVar5;
          uVar5 = FUN_ram_42068f26(((int)(uint)bVar3 >> 6) + (bVar2 & 0xf) * 4);
          puVar4[2] = uVar5;
          uVar5 = FUN_ram_42068f26(bVar3 & 0x3f);
          param_4 = param_4 + 3;
          puVar4[3] = uVar5;
          puVar4 = puVar4 + 4;
        }
        if (uVar7 < param_5) {
          bVar1 = *param_4;
          uVar8 = 0;
          if (uVar7 + 1 < param_5) {
            uVar8 = (uint)param_4[1];
          }
          uVar5 = FUN_ram_42068f26(bVar1 >> 2);
          *puVar4 = uVar5;
          uVar5 = FUN_ram_42068f26(((int)uVar8 >> 4) + (bVar1 & 3) * 0x10);
          puVar4[1] = uVar5;
          uVar5 = 0x3d;
          if (uVar7 + 1 < param_5) {
            uVar5 = FUN_ram_42068f26((uVar8 & 0xf) << 2);
          }
          puVar4[2] = uVar5;
          puVar4[3] = 0x3d;
          puVar4 = puVar4 + 4;
        }
        *param_3 = (int)puVar4 - (int)param_1;
        *puVar4 = 0;
        goto LAB_ram_4206906a;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    *param_3 = uVar7;
    uVar6 = 0xffffffd6;
  }
  return uVar6;
}

