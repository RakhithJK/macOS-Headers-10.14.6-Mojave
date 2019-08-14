//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIAccessibility/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString;

@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding>
{
    BOOL _isAccessibleElement;
    unsigned long long _traits;
    NSString *_label;
    NSAttributedString *_attributedLabel;
    NSString *_value;
    NSAttributedString *_attributedValue;
    struct CGRect _frameInContainerSpace;
    struct CGRect _frame;
}

+ (BOOL)supportsSecureCoding;
+ (id)_descriptionWithAXElement:(id)arg1;
+ (id)_descriptionWithLocalElement:(id)arg1;
+ (id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(struct CGRect)arg2;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct CGRect frameInContainerSpace; // @synthesize frameInContainerSpace=_frameInContainerSpace;
@property(retain, nonatomic) NSAttributedString *attributedValue; // @synthesize attributedValue=_attributedValue;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSAttributedString *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(nonatomic) BOOL isAccessibleElement; // @synthesize isAccessibleElement=_isAccessibleElement;
- (void).cxx_destruct;
- (id)convertToAccessibilityElementWithContainer:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

