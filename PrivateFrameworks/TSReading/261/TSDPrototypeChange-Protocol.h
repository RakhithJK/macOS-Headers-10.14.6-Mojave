//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSSPropertySet;
@protocol TSSPropertySource;

@protocol TSDPrototypeChange <NSObject>
@property(readonly, retain) id <TSSPropertySource> propertiesAfterChange;
@property(readonly, retain) id <TSSPropertySource> propertiesBeforeChange;
@property(readonly, retain) id replacement;
@property(readonly, retain) id prototype;
@property(readonly) BOOL prototypeIsBeingDeleted;
@property(readonly) BOOL prototypeIsBeingModified;
@property(readonly) BOOL prototypeIsBeingReplaced;
- (BOOL)propertiesAreChanging:(TSSPropertySet *)arg1;
- (BOOL)propertyIsChanging:(int)arg1;
@end

