//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class LiAddressList;

@interface IPXSplitMomentAction : RDDatabaseAccessAction
{
    LiAddressList *_firstHalfVersions;
    LiAddressList *_secondHalfVersions;
}

- (void).cxx_destruct;
- (int)performUndo;
- (int)performAction;
- (id)defaultActionName;
- (id)resourceObject;
- (id)initWithMoment:(id)arg1 version:(id)arg2;

@end

