//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UITraitStorage.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class _UICoreUICatalogColorWrapper;

__attribute__((visibility("hidden")))
@interface _UIColorAttributeTraitStorage : _UITraitStorage <NSCoding>
{
    _UICoreUICatalogColorWrapper *_namedColor;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 color:(id)arg3;

@end

