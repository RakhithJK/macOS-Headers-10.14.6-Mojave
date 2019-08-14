//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Tile.h"

@interface DOCKDesktopTile : Tile
{
    struct CPSProcessSerNum _psn;
    CDUnknownBlockType _addRemoveMiniViewBlock;
}

@property(copy, nonatomic) CDUnknownBlockType addRemoveMiniViewBlock; // @synthesize addRemoveMiniViewBlock=_addRemoveMiniViewBlock;
- (void).cxx_destruct;
- (void)removeMiniView;
- (void)addMiniView:(unsigned int)arg1 window:(unsigned int)arg2;
- (BOOL)isRemovable;
- (void)setPSN:(struct CPSProcessSerNum)arg1;
- (BOOL)dragDrop:(struct OpaqueCoreDrag *)arg1;
- (void)dragTracking:(struct OpaqueCoreDrag *)arg1;
- (void)dragLeave:(struct OpaqueCoreDrag *)arg1;
- (void)dragEnter:(struct OpaqueCoreDrag *)arg1;
- (void)render;
- (BOOL)supportsExpose;
- (id)copyInstallDictionary:(int)arg1;
- (void)stopActingAsProcess;
- (void)actAsProcess:(struct CPSProcessSerNum)arg1;
- (void)doCommand:(unsigned int)arg1;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(unsigned long long)arg2;
- (BOOL)allowsSpringing;
- (id)bundleIdentifier;
- (struct CPSProcessSerNum *)psn;
- (void)spring:(unsigned int)arg1;
- (BOOL)doAction:(unsigned int)arg1 fromKeyboard:(BOOL)arg2;
- (id)init;

@end

