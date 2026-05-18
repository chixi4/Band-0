
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420378f4(void)

{
  int iVar1;
  
  if (_DAT_ram_3fcb398c == 0) {
    _DAT_ram_3fcb398c = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x1110);
    if (_DAT_ram_3fcb398c == 0) {
      FUN_ram_42033fd8(1,1,1,0x3c07d2dc);
      iVar1 = 0x101;
    }
    else {
      (*(code *)&SUB_ram_40010488)(*(undefined4 *)(gp + -0x2b8),0,0x51c);
      iVar1 = FUN_ram_42037846(0x3c072740,0,0,1,0,4,2,0x3fcb3990);
      if (((((((iVar1 == 0) &&
              (((*(int *)(_DAT_ram_3fcdfb24 + 0x84) != 0 ||
                (iVar1 = FUN_ram_42037846(0x3c072740,0,0,1,0,4,1,0x3fcb3990), iVar1 == 0)) &&
               (iVar1 = FUN_ram_42037846(0x3c072748,1,7,0x24,0,0,0,0x3fcb3994), iVar1 == 0)))) &&
             (((iVar1 = FUN_ram_42037846(0x3c072754,2,0,1,0,0x10,0,0x3fcb39be), iVar1 == 0 &&
               (iVar1 = FUN_ram_42037846(0x3c072764,3,6,0x41,0,0,0,0x3fcb39bf), iVar1 == 0)) &&
              (iVar1 = FUN_ram_42037846(0x3c072770,4,7,0x20,0,0,0,0x3fcb3a00), iVar1 == 0)))) &&
            ((((iVar1 = FUN_ram_42037846(0x3c072778,5,0,1,0,0xe,0,0x3fcb3a20), iVar1 == 0 &&
               (iVar1 = FUN_ram_42037846(0x3c072784,6,0,1,0,1,1,0x3fcb3a21), iVar1 == 0)) &&
              (((iVar1 = FUN_ram_42037846(0x3c072790,7,0,1,0,1,0,0x3fcb3a22), iVar1 == 0 &&
                (((iVar1 = FUN_ram_42037846(0x3c07279c,8,7,6,0,0,0,0x3fcb3a23), iVar1 == 0 &&
                  (iVar1 = FUN_ram_42037846(0x3c0727a8,9,2,2,1,0xffff,3,0x3fcb3a2a), iVar1 == 0)) &&
                 (iVar1 = FUN_ram_42037846(0x3c0727b8,10,0,1,1,4,3,0x3fcb3a2c), iVar1 == 0)))) &&
               ((iVar1 = FUN_ram_42037846(0x3c0727c4,0xb,0,1,1,1,1,0x3fcb3a2d), iVar1 == 0 &&
                (iVar1 = FUN_ram_42037846(0x3c0727d0,0xc,7,2,0,0,0,0x3fcb3a2e), iVar1 == 0)))))) &&
             ((iVar1 = FUN_ram_42037846(0x3c0727dc,0xd,7,700,0,0,0,0x3fcb3a30), iVar1 == 0 &&
              (((iVar1 = FUN_ram_42037846(0x3c0727e8,0xe,0,1,0,1,0,0x3fcb3cec), iVar1 == 0 &&
                (iVar1 = FUN_ram_42037846(0x3c0727f8,0xf,0,1,0,1,0,0x3fcb3ced), iVar1 == 0)) &&
               ((iVar1 = FUN_ram_42037846(0x3c072808,0x10,1,1,0xffffff81,0,0xffffff81,0x3fcb3cee),
                iVar1 == 0 &&
                ((((iVar1 = FUN_ram_42037846(0x3c072814,0x11,0,1,0,0x10,0,0x3fcb3cef), iVar1 == 0 &&
                   (iVar1 = FUN_ram_42037846(0x3c072820,0x12,0,1,0,1,1,0x3fcb3cf0), iVar1 == 0)) &&
                  (iVar1 = FUN_ram_42037846(0x3c07282c,0x13,0,1,0,1,0,0x3fcb3cf1), iVar1 == 0)) &&
                 ((iVar1 = FUN_ram_42037846(0x3c072838,0x14,0,1,0,1,0,0x3fcb3cf3), iVar1 == 0 &&
                  (iVar1 = FUN_ram_42037846(0x3c072844,0x15,0,1,0,1,0,0x3fcb3cf2), iVar1 == 0)))))))
               ))))))) &&
           ((iVar1 = FUN_ram_42037846(0x3c072850,0x16,0,1,0,1,0,0x3fcb3cf4), iVar1 == 0 &&
            ((iVar1 = FUN_ram_42037846(0x3c07285c,0x3d,0,1,3,7,7,0x3fcb3e02), iVar1 == 0 &&
             (iVar1 = FUN_ram_42037846(0x3c072868,0x3f,0,1,1,2,1,0x3fcb3e03), iVar1 == 0)))))) &&
          (((iVar1 = FUN_ram_42037846(0x3c072874,0x45,0,1,0,1,0,0x3fcb3e05), iVar1 == 0 &&
            (((iVar1 = FUN_ram_42037846(0x3c072880,0x17,7,0x24,0,0,0,0x3fcb3cf8), iVar1 == 0 &&
              (iVar1 = FUN_ram_42037846(0x3c072888,0x18,6,0x41,0,0,0,0x3fcb3d22), iVar1 == 0)) &&
             (iVar1 = FUN_ram_42037846(0x3c072894,0x19,7,0x20,0,0,0,0x3fcb3d63), iVar1 == 0)))) &&
           ((((((iVar1 = FUN_ram_42037846(0x3c07289c,0x1a,0,1,1,0xe,1,0x3fcb3d83), iVar1 == 0 &&
                (iVar1 = FUN_ram_42037846(0x3c0728a4,0x1b,0,1,0,0x10,0,0x3fcb3d84), iVar1 == 0)) &&
               (iVar1 = FUN_ram_42037846(0x3c0728b0,0x1c,0,1,0,1,0,0x3fcb3d85), iVar1 == 0)) &&
              ((iVar1 = FUN_ram_42037846(0x3c0728bc,0x1d,0,1,1,4,2,0x3fcb3d86), iVar1 == 0 &&
               (iVar1 = FUN_ram_42037846(0x3c0728c8,0x1e,2,2,10,0xffff,100,0x3fcb3d88), iVar1 == 0))
              )) && ((iVar1 = FUN_ram_42037846(0x3c0728d8,0x1f,0,1,1,4,3,0x3fcb3d8a), iVar1 == 0 &&
                     (((iVar1 = FUN_ram_42037846(0x3c0728e0,0x20,0,1,1,1,1,0x3fcb3d8b), iVar1 == 0
                       && (iVar1 = FUN_ram_42037846(0x3c0728ec,0x21,0,1,0,0,0,0x3fcb3d8c),
                          iVar1 == 0)) &&
                      (iVar1 = FUN_ram_42037846(0x3c0728f8,0x22,0,1,0,1,1,0x3fcb3d8d), iVar1 == 0)))
                     ))) &&
            (((iVar1 = FUN_ram_42037846(0x3c072904,0x23,0,1,0,1,0,0x3fcb3d8e), iVar1 == 0 &&
              (iVar1 = FUN_ram_42037846(0x3c072910,0x24,0,1,0,0xb,0,0x3fcb3d8f), iVar1 == 0)) &&
             ((iVar1 = FUN_ram_42037846(0x3c07291c,0x3e,0,1,3,7,3,0x3fcb3e95), iVar1 == 0 &&
              (((iVar1 = FUN_ram_42037846(0x3c072928,0x40,0,1,1,2,2,0x3fcb3e96), iVar1 == 0 &&
                (iVar1 = FUN_ram_42037846(0x3c072934,0x42,0,1,0x24,0xb1,0x24,0x3fcb3e98), iVar1 == 0
                )) && ((iVar1 = FUN_ram_42037846(0x3c072940,0x41,0,1,1,2,1,0x3fcb3e97), iVar1 == 0
                       && (((((iVar1 = FUN_ram_42037846(0x3c072950,0x43,0,1,0,1,0,0x3fcb3e94),
                              iVar1 == 0 &&
                              (iVar1 = FUN_ram_42037846(0x3c072960,0x44,0,1,0,1,0,0x3fcb3e99),
                              iVar1 == 0)) &&
                             (iVar1 = FUN_ram_42037846(0x3c072970,0x48,0,1,1,0x1e,3,0x3fcb3e9a),
                             iVar1 == 0)) &&
                            ((iVar1 = FUN_ram_42037846(0x3c072980,0x49,0,1,1,10,1,0x3fcb3e9b),
                             iVar1 == 0 &&
                             (iVar1 = FUN_ram_42037846(0x3c072990,0x4a,0,1,0,1,0,0x3fcb3e9c),
                             iVar1 == 0)))) &&
                           (iVar1 = FUN_ram_42037846(0x3c07299c,0x4c,2,1,1,10000,0,0x3fcb3e9e),
                           iVar1 == 0)))))))))))))))) &&
         ((((iVar1 = FUN_ram_42037846(0x3c0729ac,0x4d,0,1,1,1,0,0x3fcb3ea0), iVar1 == 0 &&
            (iVar1 = FUN_ram_42037846(0x3c0729bc,0x46,0,1,0,1,0,0x3fcb3e9d), iVar1 == 0)) &&
           (iVar1 = FUN_ram_42037846(0x3c0729c8,0x25,0,1,0,1,0,0x3fcb3991), iVar1 == 0)) &&
          ((((((((iVar1 = FUN_ram_42037846(0x3c0729d0,0x26,7,0xc,0,0,0,0x3fcb3d94), iVar1 == 0 &&
                 (iVar1 = FUN_ram_42037846(0x3c0729d8,0x3c,0,1,1,1,1,0x3fcb3ea8), iVar1 == 0)) &&
                (iVar1 = FUN_ram_42037846(0x3c0729e4,0x47,0,1,0,0xff,10,0x3fcb3e04), iVar1 == 0)) &&
               (((iVar1 = FUN_ram_42037846(0x3c0729f4,0x27,0,1,0,1,0,0x3fcb3d90), iVar1 == 0 &&
                 (iVar1 = FUN_ram_42037846(0x3c072a00,0x28,0,1,0,1,0,0x3fcb3da4), iVar1 == 0)) &&
                ((iVar1 = FUN_ram_42037846(0x3c072a08,0x29,0,1,0,1,0,0x3fcb3da5), iVar1 == 0 &&
                 ((iVar1 = FUN_ram_42037846(0x3c072a10,0x2a,0,1,0,1,0,0x3fcb3da6), iVar1 == 0 &&
                  (iVar1 = FUN_ram_42037846(0x3c072a1c,0x2b,0,1,0,4,2,0x3fcb3da7), iVar1 == 0)))))))
               ) && ((iVar1 = FUN_ram_42037846(0x3c072a28,0x2c,0,1,0,2,0,0x3fcb3da8), iVar1 == 0 &&
                     (((iVar1 = FUN_ram_42037846(0x3c072a38,0x2d,0,1,0,0xff,0,0x3fcb3dd8),
                       iVar1 == 0 &&
                       (iVar1 = FUN_ram_42037846(0x3c072a48,0x2e,7,0x2c,0,0,0,0x3fcb3dac),
                       iVar1 == 0)) &&
                      (iVar1 = FUN_ram_42037846(0x3c072a58,0x2f,0,1,0,1,0,0x3fcb3dd9), iVar1 == 0)))
                     ))) &&
             (((iVar1 = FUN_ram_42037846(0x3c072a64,0x30,0,1,0,3,3,0x3fcb3dda), iVar1 == 0 &&
               (iVar1 = FUN_ram_42037846(0x3c072a74,0x31,0,1,0,3,3,0x3fcb3ddb), iVar1 == 0)) &&
              (((iVar1 = FUN_ram_42037846(0x3c072a84,0x32,0,1,0,1,0,0x3fcb3ddc), iVar1 == 0 &&
                ((iVar1 = FUN_ram_42037846(0x3c072a94,0x33,0,1,0,1,0,0x3fcb3ddd), iVar1 == 0 &&
                 (iVar1 = FUN_ram_42037846(0x3c072aa4,0x34,0,1,0,1,0,0x3fcb3dde), iVar1 == 0)))) &&
               (iVar1 = FUN_ram_42037846(0x3c072ab4,0x35,0,1,0,1,0,0x3fcb3ddf), iVar1 == 0)))))) &&
            ((((((iVar1 = FUN_ram_42037846(0x3c072ac4,0x36,0,1,0,1,0,0x3fcb3de0), iVar1 == 0 &&
                 (iVar1 = FUN_ram_42037846(0x3c072ad4,0x38,0,1,0,4,2,0x3fcb3e0c), iVar1 == 0)) &&
                (iVar1 = FUN_ram_42037846(0x3c072ae0,0x37,7,0x20,0,0,0,0x3fcb3de1), iVar1 == 0)) &&
               ((iVar1 = FUN_ram_42037846(0x3c072af0,0x39,7,0x84,0,0,0,0x3fcb3e10), iVar1 == 0 &&
                (iVar1 = FUN_ram_42037846(0x3c072afc,0x3a,0,1,1,4,3,0x3fcb3ea4), iVar1 == 0)))) &&
              ((iVar1 = FUN_ram_42037846(0x3c072b08,0x3b,0,1,0,1,0,0x3fcb3e01), iVar1 == 0 &&
               ((iVar1 = FUN_ram_42037846(0x3c072b18,0x4b,0,1,0,1,0,0x3fcb3d91), iVar1 == 0 &&
                (iVar1 = FUN_ram_42037846(0x3c072b24,0x4f,0,1,0,1,0,0x3fcb3e06), iVar1 == 0)))))) &&
             (iVar1 = FUN_ram_42037846(0x3c072b34,0x50,0,1,0,1,0,0x3fcb3e07), iVar1 == 0)))) &&
           (((iVar1 = FUN_ram_42037846(0x3c072b44,0x51,0,1,0,1,0,0x3fcb3e08), iVar1 == 0 &&
             (iVar1 = FUN_ram_42037846(0x3c072b54,0x4e,2,2,0,0xffff,0,0x3fcb3d92), iVar1 == 0)) &&
            (iVar1 = FUN_ram_42037846(0x3c072b64,0x52,2,2,0,0xffff,6,0x3fcb3e0a), iVar1 == 0))))))))
      {
        iVar1 = FUN_ram_42037846(0x3c072b74,0x53,2,2,0,0xffff,300,0x3fcb3ea2);
        return iVar1;
      }
    }
  }
  else {
    FUN_ram_42033fd8(1,1,2,0x3c07fa4c);
    iVar1 = 0;
  }
  return iVar1;
}

