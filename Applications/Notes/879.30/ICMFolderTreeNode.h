//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTreeNode.h>

@class NFFolder, NSSet, NSString;
@protocol ICNoteContainer;

@interface ICMFolderTreeNode : NSTreeNode
{
    NFFolder *_targetFolder;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NFFolder *targetFolder; // @synthesize targetFolder=_targetFolder;
- (void).cxx_destruct;
- (BOOL)validateDestinationHTMLFolder:(id)arg1 sourceHTMLFolder:(id)arg2 copyOperation:(BOOL)arg3;
- (unsigned long long)validateDropForTreeNode:(id)arg1 copyOperation:(BOOL)arg2;
@property(readonly, nonatomic) BOOL acceptsNoteDrops;
@property(readonly, nonatomic) BOOL isDroppable;
@property(readonly, nonatomic) BOOL isDraggable;
- (id)persistentIdentifier;
@property(readonly, nonatomic) __weak id <ICNoteContainer> noteContainer;
- (id)preferredTextColor;
- (BOOL)isHTMLNode;
- (BOOL)canEditNode;
- (BOOL)canSelectNode;
- (BOOL)isAncestorOfNode:(id)arg1;
@property(readonly, nonatomic) id account;
- (double)preferredCellHeight;
- (id)preferredCellViewIdentifier;
@property(readonly, nonatomic) __weak NSSet *notes;
@property(readonly, nonatomic) __weak NSString *folderName;

@end

