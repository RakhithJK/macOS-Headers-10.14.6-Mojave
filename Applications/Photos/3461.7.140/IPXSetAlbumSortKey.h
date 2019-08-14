//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class NSString, RDCustomOrderResetChange;

@interface IPXSetAlbumSortKey : RDModelAction
{
    RDCustomOrderResetChange *_customOrderResetChange;
    NSString *_newSortKeyPath;
    BOOL _newSortAscending;
    NSString *_oldSortKeyPath;
    BOOL _oldSortAscending;
}

- (void).cxx_destruct;
- (int)performRedo;
- (int)performUndo;
- (int)performAction;
- (id)album;
- (id)defaultActionName;
- (id)initWithAlbum:(id)arg1 newSortKeyPath:(id)arg2 sortAscending:(BOOL)arg3;

@end

