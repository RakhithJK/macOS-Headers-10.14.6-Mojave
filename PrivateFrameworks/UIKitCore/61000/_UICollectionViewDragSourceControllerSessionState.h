//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceControllerSessionState : NSObject
{
    id <UIDragSession> _dragSession;
}

@property(retain, nonatomic) id <UIDragSession> dragSession; // @synthesize dragSession=_dragSession;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL isActive;

@end

