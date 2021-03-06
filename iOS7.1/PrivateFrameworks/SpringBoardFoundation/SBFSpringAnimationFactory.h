//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFAnimationFactory.h>

@interface SBFSpringAnimationFactory : SBFAnimationFactory
{
    float _mass;
    float _stiffness;
    float _damping;
    float _epsilon;
}

+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4;
+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3;
@property(readonly, nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) float damping; // @synthesize damping=_damping;
@property(readonly, nonatomic) float stiffness; // @synthesize stiffness=_stiffness;
@property(readonly, nonatomic) float mass; // @synthesize mass=_mass;
- (id)description;
- (id)_animation;
- (id)_springAnimation;
- (void)_calculateDuration;
- (id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4;

@end

